#include "cheats.hpp"
#include "BottleManager.hpp"
#include "3DS.h"

namespace CTRPluginFramework
{
    // This function is called on the plugin starts, before main
    void    PatchProcess(FwkSettings &settings)
    {
    }

    #define MAJOR_VERSION       2
    #define MINOR_VERSION       0
    #define REVISION_VERSION    0
    #define STRINGIFY(x)        #x
    #define TOSTRING(x)         STRINGIFY(x)
    #define STRING_VERSION      "[" TOSTRING(MAJOR_VERSION) "." TOSTRING(MINOR_VERSION) "." TOSTRING(REVISION_VERSION) "]"

    std::string     green = "" << Color::Green << "";
    std::string     orange = "" << Color::Orange << "";
    std::string     red = "" << Color::Red << "";
    std::string     blue = "" << Color::Blue << "";
    std::string     cyan = "" << Color::Cyan << "";
    std::string     turquoise = "" << Color::Turquoise << "";
    std::string     dogerblue = "" << Color::DodgerBlue << "";
	std::string     acnl = "" << Color::Green << "とびだせどうぶつの森";
	std::string     sakuseisya = "" << Color::Cyan << "プラグイン作成者";

    const std::string about = u8"とびだせどうぶつの森 PLUGIN" STRING_VERSION "\n\n"\
        u8"By ReiNe(@reinnijineACNL)\n"
		u8"   Kanna(@suyx3EuhEgebbYj)";
		
    void    InitMenu(PluginMenu &menu)
    {

             std::string     green = "" << Color::Green << "";
    std::string     orange = "" << Color::Orange << "";
    std::string     red = "" << Color::Red << "";
    std::string     blue = "" << Color::Blue << "";
    std::string     cyan = "" << Color::Cyan << "";
    std::string     turquoise = "" << Color::Turquoise << "";
    std::string     dogerblue = "" << Color::DodgerBlue << "";

}

    static MenuEntry *AddArg(void *arg, MenuEntry *entry)
    {
        if(entry != nullptr)
            entry->SetArg(arg);
        return (entry);
    }

    static MenuEntry *EntryWithHotkey(MenuEntry *entry, const Hotkey &hotkey)
    {
        if (entry != nullptr)
        {
            entry->Hotkeys += hotkey;
            entry->SetArg(new std::string(entry->Name()));
            entry->Name() += " " + hotkey.ToString();
            entry->Hotkeys.OnHotkeyChangeCallback([](MenuEntry *entry, int index)
            {
                std::string *name = reinterpret_cast<std::string *>(entry->GetArg());

                entry->Name() = *name + " " + entry->Hotkeys[0].ToString();
            });
        }

        return (entry);
    }

    static MenuEntry *EntryWithHotkey(MenuEntry *entry, const std::vector<Hotkey> &hotkeys)
    {
        if (entry != nullptr)
        {
            for (const Hotkey &hotkey : hotkeys)
                entry->Hotkeys += hotkey;
        }

        return (entry);
    }

    static void    CreateMenu(PluginMenu &menu)
    {
        std::string     note;

        /*
        ** Movements codes
        ********************/

        note = "Use \uE077 while pressing the hotkey(s) to move very fast.\n"
               << Color::Orange << "Be careful of the loading zone, it might put you out of bound.\n"
               << ResetColor() << "You can change the hotkey by touching the controller icon on the bottom screen.";

      	std::string coord_note = "R\u3092\u62BC\u3057\u305F\u3089\u5DDD\u3082\u6E21\u308C\u3066\u79FB\u52D5\u306F\u5341\u5B57\u30AD\u30FC\u3060\u3088  new  L  walk";
       std::string caord_note = "B + Up";
	    std::string item_note = "Y + DPadUp  . Y + DPadDown ";
		
               std::string     offline = "" << Color::Magenta << "オフライン";
			   std::string     online = "" << Color::Magenta << "オンライン";
		
		
        	menu += new MenuFolder( "" << Color::Orange << "お気に入りのコード", "",
    {
		EntryWithHotkey(new MenuEntry( "" << Color::Orange << "くるくる", aaaaf, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "くるくる") }), 
		new MenuEntry( "" << Color::Orange << "壁貫通", Wallkantu, "L+DpadRight:ON  L+DpadLeft:OFF"), 
		new MenuEntry( "" << Color::Orange << "ゲーム速度上昇", fastgame),
		new MenuEntry( "" << Color::Orange << "座標移動 十字キー式", coord, "A+十字キー"),
		new MenuEntry( "" << Color::Orange << "座標移動 スライドパッド式", coordCType, "A+スライドパッド"),
		new MenuEntry( "" << Color::Orange << "オンラインムーンジャンプ", aaabb),
		new MenuEntry( "" << Color::Orange << "なんでも拾う", toreru, "Y+DpadUp:ON  Y+DpadDown:OFF"),
		new MenuEntry( "" << Color::Orange << "花を散らさない", FDB, "R+DpadUp:ON  R+DpadDown:OFF"),
		new MenuEntry( "" << Color::Orange << "カメラモッド", cameramod),
		new MenuEntry( "" << Color::Orange << "クイックモード", QuickMode),
		EntryWithHotkey(new MenuEntry( "" << Color::Orange << "名前変更", name, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "名前変更") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Orange << "村名変更", viname, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "村名変更") }), 	
		EntryWithHotkey(new MenuEntry( "" << Color::Orange << "気絶", kizetu, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "気絶") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Orange << "花散らし", aaaba, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "花散らし") }), 
		new MenuEntry( "" << Color::Orange << "エフェクト効果", bigrea),
		new MenuEntry( "" << Color::Orange << "デバッグメニュー追加", botusopakamenu, "L+DpadUp:ON  L+DpadDown:OFF"),
		new MenuEntry( "" << Color::Orange << "Tポーズ", Tpose),
		new MenuEntry( "" << Color::Orange << "自宅化", aaabc),
		new MenuEntry( "" << Color::Orange << "スペシャルリアクション", aaabd),
		new MenuEntry( "" << Color::Orange << "アイテム入手", abcd, item_note), 
		new MenuEntry( "" << Color::Orange << "アイテム無限化", itemmugen), 
		new MenuEntry( "" << Color::Orange << "エリア変更", nullptr , aaaInventoryModifier),
		new MenuEntry( "" << Color::Orange << "プレイヤー変更", nullptr , aaInventoryModifier),
		new MenuEntry( "" << Color::Orange << "国籍変更", nullptr , aaaaInventoryModifier),
		new MenuEntry( "" << Color::Orange << "お引き取りBOX機能変更", nullptr , aaaaaaInventoryModifier),
		new MenuEntry( "" << Color::Orange << "道具機能変更", nullptr , aaaaaInventoryModifier),
		});
	
	menu += new MenuFolder( "" << Color::Yellow << "ソパカ外見", "",
	 {
		new MenuEntry( "" << Color::Yellow << "ソパカ：黒", aaaaa),
		new MenuEntry( "" << Color::Yellow << "ソパカ：グラデーション", aaaab),
		new MenuEntry( "" << Color::Yellow << "ソパカ：サイドカラー", aaaac),
		new MenuEntry( "" << Color::Yellow << "ソパカ：光", aaaae),
		});

	menu += new MenuFolder( "" << Color::Red << "テレポート", "",
	 {
        EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー１", stalk1, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "プレイヤー１") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー２", stalk2, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "プレイヤー２") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー３", stalk3, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "プレイヤー３") }), 
		});

	menu += new MenuFolder( "" << Color::Red << "追跡", "",
    {
		EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー１追跡", Kannnacheats, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "プレイヤー１を追跡") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー２追跡", Kannnacheats2, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "プレイヤー2を追跡") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー３追跡", Kannnacheats3, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::X, "プレイヤー3を追跡") }), 
    });

	    menu += new MenuFolder(offline +  "" << Color::Blue << "ﾋﾟｺﾋﾟｺﾊﾝﾏｰﾂｱｰｺｰﾄﾞ", "",
    {
		new MenuEntry( "" << Color::Blue << "ロボット操作", robot), 
		new MenuEntry( "" << Color::Blue << "ロボット停止", robot1), 
		new MenuEntry( "" << Color::Blue << "ロボット追跡", robot2), 
    });
	
	 	menu += new MenuFolder(online +  "" << Color::Blue << "ﾋﾟｺﾋﾟｺﾊﾝﾏｰﾂｱｰｺｰﾄﾞ", "",
    {
		new MenuEntry( "" << Color::Blue << "ロボット操作", onrobot), 
		new MenuEntry( "" << Color::Blue << "ロボット追跡", onrobot2), 
    });
	
	menu += new MenuFolder( "" << Color::LimeGreen << "プレイヤー情報", "",
    {
		new MenuEntry( "" << Color::LimeGreen << "\u5922\u756A\u5730\u5909\u66F4\u0031", dream1), 
	    new MenuEntry( "" << Color::LimeGreen << "\u5922\u756A\u5730\u5909\u66F4\u0032", dream2), 	
	    new MenuEntry( "" << Color::LimeGreen << "\u5922\u756A\u5730\u5909\u66F4\u0033", dream3), 	
		new MenuEntry( "" << Color::LimeGreen << "\u767B\u9332\u3057\u305F\u5E74", nen), 	
		new MenuEntry( "" << Color::LimeGreen << "\u767B\u9332\u3057\u305F\u6708", tuki), 	
		new MenuEntry( "" << Color::LimeGreen << "\u767B\u9332\u3057\u305F\u65E5", hi), 	
		new MenuEntry( "" << Color::LimeGreen << "誕生月", tantuki), 
		new MenuEntry( "" << Color::LimeGreen << "誕生日", tanday), 
		new MenuEntry( "" << Color::LimeGreen << "出身地", shushin), 	
    });

		menu += new MenuFolder("テストコード", "",
	 {
        new MenuEntry("Special_Reaction", keyboard),
		new MenuEntry("Special_Reaction", kamera),
		new MenuEntry("text2item", abcd), 
	});
	
}

    int    main(void)
    {
		std::string     namenote = "" << Color::Green << "とびだせどうぶつの森";
        PluginMenu *menu = new PluginMenu(namenote, MAJOR_VERSION, MINOR_VERSION, REVISION_VERSION, about);

        menu->SynchronizeWithFrame(true);

        CreateMenu(*menu);

        // Launch menu and mainloop
        menu->Run();

        // Exit plugin
        return (0);
    }
}
