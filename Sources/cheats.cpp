#include "types.h"
#include "cheats.hpp"

namespace CTRPluginFramework
{
    using StringVector = std::vector<std::string>;

	static u32	g_basePointer = 0x005A2E3C;



	void	aaaaa(MenuEntry *entry)
	{
		Process::Write32(0x327F580E, 0xF7511DC5);
	}
void	aaaab(MenuEntry *entry)
	{
		Process::Write32(0x327F5844, 0xF7512150);
	}
void	aaaac(MenuEntry *entry)
	{
		Process::Write32(0x327F5808, 0xF7511DC5);
	}
void	aaaad(MenuEntry *entry)
	{
		Process::Write32(0x327F5F70, 0xffffffff);
	}	
void	aaaae(MenuEntry *entry)
	{
		Process::Write32(0x327F580C, 0xF7511DC5);
	}	
void	aaaaf(MenuEntry *entry)
	{
	if (entry->Hotkeys[0].IsDown())
		{
	   u32 loc;
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
		Process::Write32(0x33099FE4, 0x065F6000);
		}
		else
		{
		Process::Write32(0x3309A110, 0x065F6000);
		}
	}}
void	aaaba(MenuEntry *entry)
	{
	if (entry->Hotkeys[0].IsDown())
		{
	Process::Write32(0x3309A2C0, 0x00000000);
	}}

void	aaabb(MenuEntry *entry)
	{
	u32 loc;
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
	    if (Controller::IsKeysDown(L + X))
         {	 
		Process::Write32(0x3309A702, 0x007FFFFF);
        	}
	    if (Controller::IsKeysDown(L + B))
        	{	 
		Process::Write32(0x3309A702, 0x00010FF0);
	     }
		}
		else
		{
	    if (Controller::IsKeysDown(L+ X))
         {	 
		Process::Write32(0x3309A82E, 0x007FFFFF);
        	}
	    if (Controller::IsKeysDown(L + B))
        	{	 
		Process::Write32(0x3309A82E, 0x00010FF0);
	     }
		}
}
void	aaabc(MenuEntry *entry)
	{
	Process::Write32(0x00951338, 0xA5030000);
}
struct aaItem
	{
        const char  *aaname;
        const u32    aaid;
	};

    static const std::vector<aaItem> g_aaitems =
    {
        { "P1", 0x31F49AA0 },
        { "P2", 0x31F53F20 },
		{ "P3", 0x31F5E3A0 },
        { "P4", 0x31F68820 },
    }; 
    void	aaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaitems;

        if (aaitems.empty())
            for (const aaItem &i : g_aaitems)
                aaitems.push_back(i.aaname);

        Keyboard    keyboard("\u30D7\u30EC\u30A4\u30E4\u30FC\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaitems);
        int         aachoice = keyboard.Open();

        if (aachoice >= 0)
            Process::Write32(0x00AA914C, g_aaitems[aachoice].aaid);
    }

struct aaaItem
	{
        const char  *aaaname;
        const u8    aaaid;
	};

    static const std::vector<aaaItem> g_aaaitems =
    {
      { "\u6751", 0x00 },
	  { "\u5546\u5E97\u8857", 0x01 },
	  { "\u99C5", 0x02 },
	  { "P1 \u5BB6 Main", 0x03 },
	  { "P1 \u5BB6 UP", 0x04 },
	  { "P1 \u5BB6 DOWN", 0x05 },
	  { "P1 \u5BB6 Right", 0x06 },
	  { "P1 \u5BB6 left", 0x07 },
	  { "P1 \u5BB6 Back", 0x08 },  
	  { "P2 \u5BB6 Main", 0x09 },
	  { "P2 \u5BB6 UP", 0x0A },
	  { "P2 \u5BB6 DOWN", 0x0B },
	  { "P2 \u5BB6 Right", 0x0C },
	  { "P2 \u5BB6 left", 0x0D },
	  { "P2 \u5BB6 Back", 0x0E },
	  { "P3 \u5BB6 Main", 0x0F },
	  { "P3 \u5BB6 UP", 0x10 },
	  { "P3 \u5BB6 DOWN", 0x11 },
	  { "P3 \u5BB6 Right", 0x12 },
	  { "P3 \u5BB6 left", 0x13 },
	  { "P3 \u5BB6 Back", 0x14 },
	  { "P4 \u5BB6 Main", 0x15 },
	  { "P4 \u5BB6 UP", 0x16 },
	  { "P4 \u5BB6 DOWN", 0x17 },
	  { "P4 \u5BB6 Right", 0x18 },
	  { "P4 \u5BB6 left", 0x19 },
	  { "P4 \u5BB6 Back", 0x1A },
	  { "A1 \u5BB6", 0x1B },
	  { "A2 \u5BB6", 0x1C },
	  { "A3 \u5BB6", 0x1D },
	  { "A4 \u5BB6", 0x1E },
	  { "A5 \u5BB6", 0x1F },
	  { "A6 \u5BB6", 0x20 },
	  { "A7 \u5BB6", 0x21 },
	  { "A8 \u5BB6", 0x22 },
	  { "A9 \u5BB6", 0x23 },
	  { "\u5F79\u5834", 0x23 },
	  { "return error", 0x28 },
	  { "Come to the village", 0x2A },
	  { "R-Parkers", 0x2B },
	  { "\u30E2\u30C0\u30F3\u306A\u4EA4\u756A", 0x30 },
	  { "\u30AF\u30E9\u30B7\u30C3\u30AF\u306A\u306A\u4EA4\u756A", 0x31 },
	  { "\u30AB\u30D5\u30A7", 0x32 },
	  { "\u30AB\u30D5\u30A7\u3000\u30D0\u30A4\u30C8\u30A4\u30D9\u30F3\u30C8", 0x33 },
	  { "\u5922\u898B\u306E\u9928", 0x37 },
	  { "\u30C7\u30D1\u30FC\u30C8\u0031\u968E", 0x3C },
	  { "\u30C7\u30D1\u30FC\u30C8\u0032\u968E", 0x3D },
	  { "\u30C7\u30D1\u30FC\u30C8\u0033\u968E", 0x3E },
	  { "\u30A8\u30A4\u30D6\u30EB\u30B7\u30B9\u30BF\u30FC\u30BA \u670D\u5C4B", 0x3F },
	  { "\u30A8\u30A4\u30D6\u30EB\u30B7\u30B9\u30BF\u30FC\u30BA \u30A2\u30AF\u30BB\u5C4B", 0x40 },
	  { "Shoe Shank \u9774\u5C4B", 0x40 },
	  { "\u4E0D\u52D5\u7523\u5C4B", 0x41 },
	  { "Club444", 0x47 },
	  { "\u30D3\u30E5\u30FC\u30C6\u30A3\u30FC\u30B5\u30ED\u30F3 \u30B9\u30D4\u30FC\u30C7\u30A3", 0x48 },
	  { "\u535A\u7269\u9928 \u4E2D\u592E", 0x49 },
	  { "\u535A\u7269\u9928 \u9B5A", 0x4A },
	  { "\u535A\u7269\u9928\u866B", 0x4D },
	  { "\u535A\u7269\u9928 \u5316\u77F3", 0x50 },
	  { "\u535A\u7269\u9928 \u7D75\u753B", 0x53 },
	  { "\u535A\u7269\u9928 \u0032\u968E", 0x55 },
	  { "\u535A\u7269\u9928 \u0032\u968E \u5DE6\u4E0A", 0x56 },
	  { "\u535A\u7269\u9928 \u0032\u968E \u5DE6\u4E0B", 0x57 },
	  { "\u535A\u7269\u9928 \u0032\u968E \u53F3\u4E0A", 0x58 },
	  { "\u535A\u7269\u9928 \u0032\u968E \u53F3\u4E0B", 0x59 },
	  {"\u90F5\u4FBF\u5C40", 0x5A },
	  {"\u5922\u898B\u306E\u9928", 0x5B },
	  { "\u8A3C\u660E\u5199\u771F\u6A5F", 0x5C },
	  { "Train", 0x5D },
	  { "Dream Bed Error", 0x64 },
	  { "\u5CF6\u3078\u884C\u304F\u30A4\u30D9\u30F3\u30C8", 0x65 },
	  { "\u6751\u3078\u623B\u308B\u30A4\u30D9\u30F3\u30C8", 0x66 },
	  { "\u5CF6 \u5BA4\u5185", 0x67 },
	  { "\u5CF6 \u5C4B\u5916", 0x68 },
	  { "Go island", 0x65 },
	  { "\u30CF\u30C3\u30D4\u30FC\u30DB\u30FC\u30E0\u30A2\u30AB\u30C7\u30DF\u30FC \u4E2D\u592E", 0x8E },
	  { "\u30AA\u30FC\u30C8\u30AD\u30E3\u30F3\u30D7\u5834", 0xA0 },
	  { "\u30AA\u30FC\u30C8\u30AD\u30E3\u30F3\u30D7\u5834 \u30AD\u30E3\u30F3\u30D1\u30FC\u306E\u8ECA\u306E\u4E2D", 0xA1 },
	  { "\u3057\u305A\u3048\u304C\u3044\u308B\u30A8\u30EA\u30A2", 0x63 },
	  { "\u30BF\u30A4\u30C8\u30EB", 0x5E },
	  
	  { "\u30AB\u30E1\u30E9", 0xa4 },
	  { "\u4F4F\u6C11\u767B\u9332", 0x5d },
	  { "\u30AA\u30EC\u30F3\u30B8\u30C6\u30F3\u30C8", 0x25 },
	  { "\u6A21\u69D8\u66FF\u3048\u30A4\u30D9\u30F3\u30C8", 0xa3 },
	  { "\u91E3\u308A\u7D50\u679C", 0x2F },
    };
    void	aaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaitems;

        if (aaaitems.empty())
            for (const aaaItem &i : g_aaaitems)
                aaaitems.push_back(i.aaaname);

        Keyboard    keyboard("\u5834\u6240\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaaitems);
        int         aaachoice = keyboard.Open();

        if (aaachoice >= 0)
            Process::Write8(0x0095133A, g_aaaitems[aaachoice].aaaid);
			
			u32 loc;
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
         {	 
		      Process::Write16(0x33099FB3, 51456);
		 }
         }
		else
		{
         {	 
		      Process::Write32(0x3309a0dc, 940568888);
			   Process::Write32(0x3309a0df, 940568888);
		 }
		}
    }	
void	aaabd(MenuEntry *entry)
	{
		{
	    if (Controller::IsKeysDown(L+ A))
         {	 
		 Process::Write32(0x31F52470, 0x1F2FD22);
		 Process::Write32(0x31F52474, 0x33323130);
		 Process::Write32(0x31F52478, 0x37363534);
		 Process::Write32(0x31F5247C, 0x11403F3E);
        	}
	    if (Controller::IsKeysDown(L + B))
        	{	 
		 Process::Write32(0x31F52470, 0x04030201);
		 Process::Write32(0x31F52474, 0x08070605);
		 Process::Write32(0x31F52478, 0x0C0B0A09);
		 Process::Write32(0x31F5247C, 0x11100E0D);
	     }
		}
}
	struct aaaaItem
	{
        const char  *aaaaname;
        const u16    aaaaid;
	};

    static const std::vector<aaaaItem> g_aaaaitems =
    {
        { "\u65E5\u672C", 0x0001 },
        { "\u30DCU\u30B9\u30CB\u30A2\u30FB\u30D8\u30EB\u30C4\u30A7\u30B4\u30D3\u30CA", 0x0044 },
		{ "\u30AB\u30A4\u30B3\u30B9\u30FB\u30BF\u30FC\u30AF\u30B9\u8AF8\u5CF6", 0x0030 },
        { "\u30BB\u30F3\u30C8\u30D3\u30F3\u30BB\u30F3\u30C8\u30FB\u30B0\u30EC\u30CA\u30C7\u30A3\u30FC\u30F3", 0x002D },
		{ "\u30BB\u30F3\u30C8\u30AD\u30C3\u30C4\u30FB\u30CD\u30A4\u30D3\u30B9", 0x002B },
    }; 
	    void	aaaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaaitems;

        if (aaaaitems.empty())
            for (const aaaaItem &i : g_aaaaitems)
                aaaaitems.push_back(i.aaaaname);

        Keyboard    keyboard("\u56FD\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaaaitems);
        int         aaaachoice = keyboard.Open();

        if (aaaachoice >= 0)
            Process::Write16(0x31F4F072, g_aaaaitems[aaaachoice].aaaaid);
    }
	
	void	reaction(MenuEntry *entry)
	{
		{
	    if (Controller::IsKeysDown(L + A))
         {	 
		 Process::Write32(0x31F52470, 0x1F2FD22);
		 Process::Write32(0x31F52474, 0x33323130);
		 Process::Write32(0x31F52478, 0x37363534);
		 Process::Write32(0x31F5247C, 0x11403F3E);
        	}
	    if (Controller::IsKeysDown(L + B))
        	{	 
		 Process::Write32(0x31F52470, 0x04030201);
		 Process::Write32(0x31F52474, 0x08070605);
		 Process::Write32(0x31F52478, 0x0C0B0A09);
		 Process::Write32(0x31F5247C, 0x11100E0D);
	     }
		}
}
	void	fastgame(MenuEntry *entry)
	{
	Process::Write32(0x32939920, 0x00000000);
    }
void	aaabf(MenuEntry *entry)
	{
		{
	    if (Controller::IsKeysDown(L + DPadUp))
         {	 
		 Process::Write32(0x0073AA30, 0xE1A00000);
        	}
	    if (Controller::IsKeysDown(L + DPadDown))
        	{	 
		 Process::Write32(0x0073AA30, 0x0A000011);
	     }
		}
}
void    bigrea(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(L + DPadUp) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x0054F3B4, 0x400FFFFF);
        OSD::Notify("Big Effect: " << Color::Green << "ON");
    }

    if (Controller::IsKeysDown(L + DPadDown) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x0054F3B4, 0x3F800000);
        OSD::Notify("Big Effect: " << Color::Red << "OFF");
    }

    if (!Controller::IsKeysDown(L + DPadDown) && !Controller::IsKeysDown(L + DPadUp))
    {
        pressed=false;
    }
}
void	cameramod(MenuEntry *entry)
	{
	u16 a;
	if(Process::Read16(0x0047D16E, a))
		{
	    if (Controller::IsKeysDown(Start + DPadDown))
         {	 
		       Process::Write16(0x0047D16E, 16256);
		 }
		 if (Controller::IsKeysDown(L))
         {	 
		     a--;
		       Process::Write16(0x0047D16E, a);
		 }
		 if (Controller::IsKeysDown(R))
         {	 
		     a++;
		       Process::Write16(0x0047D16E, a);
		 }
		}
}
	
struct aaaaaItem
	{
        const char  *aaaaaname;
        const u16    aaaaaid;
	};

    static const std::vector<aaaaaItem> g_aaaaaitems =
    {
        { "\u7121\u3057", 0xfe7f },
        { "\u65A7", 0x334d },
		{ "\u7DB2", 0x3351 },
        { "\u7AFF", 0x3355 },
		{ "\u30B9\u30B3\u30C3\u30D7", 0x3359 },	
		{ "\u30B8\u30E7\u30A6\u30ED", 0x335d },
        { "\u30D1\u30C1\u30F3\u30B3", 0x3361 },
		{ "\u30CF\u30F3\u30DE\u30FC", 0x3365 },
        { "\u30B5\u30A4\u30C0\u30FC", 0x3368 },
		{ "party popper", 0x336a },
		{ "pink bpinwheel", 0x338b },
        { "\u30B3\u30FC\u30D2\u30FC", 0x338c },
		{ "\u30A2\u30A4\u30B9", 0x3394 },
        { "\u8C46", 0x338e },
		{ "\u30B5\u30F3\u30BF\u306E\u888B", 0x33a1 },
    }; 
	    void	aaaaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaaaitems;

        if (aaaaaitems.empty())
            for (const aaaaaItem &i : g_aaaaaitems)
                aaaaaitems.push_back(i.aaaaaname);

        Keyboard    keyboard("\u9053\u5177\u6A5F\u80FD\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaaaaitems);
        int         aaaaachoice = keyboard.Open();

        if (aaaaachoice >= 0)
            Process::Write16(0x33096734, g_aaaaaitems[aaaaachoice].aaaaaid);
    }
void  keyboard(MenuEntry *entry)
{
    Keyboard        keyboard("Kannna:");
     u8 a;
	 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write8(0x0095133A, a);
	    
    }
}


void	coord(MenuEntry *entry)
		{
	   u32 loc;
	   float outz;
	   float outx;
	   float inz;
	   float inx;
	    if(Process:: ReadFloat(0x33099E58, outz))
		 if(Process:: ReadFloat(0x33099E50, outx))
		  if(Process:: ReadFloat(0x33099F84, inz))
		 if(Process:: ReadFloat(0x33099F7C, inx))

	   
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
	    if (Controller::IsKeysDown(A + DPadUp))
		{
		   outz = outz - 9.0;
		    if(Process:: WriteFloat(0x33099E58, outz));
		}
		if (Controller::IsKeysDown(A + DPadDown))
		{
		   outz = outz + 9.0;
		    if(Process:: WriteFloat(0x33099E58, outz));
		}
		 if (Controller::IsKeysDown(A + DPadLeft))
		 {
		   outx = outx - 9.0;
		    if(Process:: WriteFloat(0x33099E50, outx));
		}
		if (Controller::IsKeysDown(A + DPadRight))
		{
		   outx = outx + 9.0;
		    if(Process:: WriteFloat(0x33099E50, outx));
		}
		}
		else 
	    {
		 if (Controller::IsKeysDown(A + DPadUp))
		 {
		   inz = inz - 9.0;
		    if(Process:: WriteFloat(0x33099F84, inz));
		}
		if (Controller::IsKeysDown(A + DPadDown))
		{
		   inz = inz + 9.0;
           if(Process:: WriteFloat(0x33099F84, inz));
		}
		 if (Controller::IsKeysDown(A + DPadLeft))
		 {
		   inx = inx - 9.0;
		    if(Process:: WriteFloat(0x33099F7C, inx));
		}
		if (Controller::IsKeysDown(A + DPadRight))
		{
		   inx = inx + 9.0;
		    if(Process:: WriteFloat(0x33099F7C, inx));
		}
	    }	
		
}
void	coordCType(MenuEntry *entry)
		{
	   u32 loc;
	   float outz;
	   float outx;
	   float inz;
	   float inx;
	    if(Process:: ReadFloat(0x33099E58, outz))
		 if(Process:: ReadFloat(0x33099E50, outx))
		  if(Process:: ReadFloat(0x33099F84, inz))
		 if(Process:: ReadFloat(0x33099F7C, inx))

	   
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
	    if (Controller::IsKeysDown(A + CPadUp))
		{
		   outz = outz - 9.0;
		    if(Process:: WriteFloat(0x33099E58, outz));
		}
		if (Controller::IsKeysDown(A + CPadDown))
		{
		   outz = outz + 9.0;
		    if(Process:: WriteFloat(0x33099E58, outz));
		}
		 if (Controller::IsKeysDown(A + CPadLeft))
		 {
		   outx = outx - 9.0;
		    if(Process:: WriteFloat(0x33099E50, outx));
		}
		if (Controller::IsKeysDown(A + CPadRight))
		{
		   outx = outx + 9.0;
		    if(Process:: WriteFloat(0x33099E50, outx));
		}
		}
		else 
	    {
		 if (Controller::IsKeysDown(A + CPadUp))
		 {
		   inz = inz - 9.0;
		    if(Process:: WriteFloat(0x33099F84, inz));
		}
		if (Controller::IsKeysDown(A + CPadDown))
		{
		   inz = inz + 9.0;
           if(Process:: WriteFloat(0x33099F84, inz));
		}
		 if (Controller::IsKeysDown(A + CPadLeft))
		 {
		   inx = inx - 9.0;
		    if(Process:: WriteFloat(0x33099F7C, inx));
		}
		if (Controller::IsKeysDown(A + CPadRight))
		{
		   inx = inx + 9.0;
		    if(Process:: WriteFloat(0x33099F7C, inx));
		}
	    }	
		
}
void	kizetu(MenuEntry *entry)
	{
	if (entry->Hotkeys[0].IsDown())
		{
	u32 loc;
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
	    if (Controller::IsKeysDown(B + DPadUp))
         {	 
		      Process::Write16(0x33099FB3, 51456);
		 }
         }
		else
		{
	 if (Controller::IsKeysDown(B + DPadUp))
         {	 
		      Process::Write32(0x3309a0dc, 940568888);
			   Process::Write32(0x3309a0df, 940568888);
		 }
		}
	}}
 void	name(MenuEntry *entry)
 {
	 if (entry->Hotkeys[0].IsDown())
	 {
    u32  pn;
	u32  pn1;
	u32  pn2;
	u32  pn3;
	
	 Process::Read32(0x32E14348, pn);
          Process::Read32(0x32E1434C, pn1);
          Process::Read32(0x32E14350, pn2);
          Process::Read32(0x32E14354, pn3);
	
        {
             Process::Write32(0x31F4F048, pn);
            Process:: Write32(0x31F4F04C, pn1);
             Process::Write32(0x31F4F050, pn2);
             Process::Write32(0x31F4F054, pn3);
		 }
 
 }}
 void	viname(MenuEntry *entry)
 {
	 if (entry->Hotkeys[0].IsDown())
	 {
    u32  vn;
	u32  vn1;
	u32  vn2;
	u32  vn3;
	
	 Process::Read32(0x32E14348, vn);
          Process::Read32(0x32E1434C, vn1);
          Process::Read32(0x32E14350, vn2);
          Process::Read32(0x32E14354, vn3);
	
	  if (Controller::IsKeysDown(L + DPadDown))
        {
             Process::Write32(0x31F4F05E, vn);
            Process:: Write32(0x31F4F062, vn1);
             Process::Write32(0x31F4F066, vn2);
             Process::Write32(0x31F4F06A, vn3);
		 }
 
 
 }}

void	stalk1(MenuEntry *entry)
		{
			if (entry->Hotkeys[0].IsDown())
			{
	   u32 loc;
	   u32 outz;
	   u32 outx;
	   u32 inz;
	   u32 inx;
	    if(Process:: Read32(0x3309BC18, outz))
		 if(Process:: Read32(0x3309BC10, outx))
		  if(Process:: Read32(0x3309BD44, inz))
		 if(Process:: Read32(0x3309BD3C, inx))

	   
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
		{
		    if(Process:: Write32(0x33099E58, outz));
		    if(Process:: Write32(0x33099E50, outx));
		}
		}
		else 
	    {
		 {
		    if(Process:: Write32(0x33099F84, inz));
		    if(Process:: Write32(0x33099F7C, inx));
		}
	    }	
		
	}}

void	stalk2(MenuEntry *entry)
		{
			if (entry->Hotkeys[0].IsDown())
			{
	   u32 loc;
	   u32 outz;
	   u32 outx;
	   u32 inz;
	   u32 inx;
	    if(Process:: Read32(0x3309CD68, outz))
		 if(Process:: Read32(0x3309CD60, outx))
		  if(Process:: Read32(0x3309CE7C, inz))
		 if(Process:: Read32(0x3309CE74, inx))

	   
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
		{
		    if(Process:: Write32(0x33099E58, outz));
		    if(Process:: Write32(0x33099E50, outx));
		}
		}
		else 
	    {
		 {
		    if(Process:: Write32(0x33099F84, inz));
		    if(Process:: Write32(0x33099F7C, inx));
		}
	    }	
		
		}}
void	stalk3(MenuEntry *entry)
		{
			if (entry->Hotkeys[0].IsDown())
			{
	   u32 loc;
	   u32 outz;
	   u32 outx;
	   u32 inz;
	   u32 inx;
	    if(Process:: Read32(0x3309DEB4, outz))
		 if(Process:: Read32(0x3309DEAC, outx))
		  if(Process:: Read32(0x3309E204, inz))
		 if(Process:: Read32(0x3309E1FC, inx))

	   
	 if(Process::Read32(0x33099F84, loc))
		if (loc == -1)
		{
		{
		    if(Process:: Write32(0x33099E58, outz));
		    if(Process:: Write32(0x33099E50, outx));
		}
		}
		else 
	    {
		 {
		    if(Process:: Write32(0x33099F84, inz));
		    if(Process:: Write32(0x33099F7C, inx));
		}
	    }	
		
		}}


struct aaaaaaItem
	{
        const char  *aaaaaaname;
        const u8    aaaaaaid;
	};

    static const std::vector<aaaaaaItem> g_aaaaaaitems =
    {
        { "\u30B4\u30DF\u7BB1", 0x2a },
        { "\u30E9\u30C3\u30D4\u30F3\u30B0", 0x2b },
		{ "\u65E5\u306B\u3061", 0x2e },
        { "\u8A95\u751F\u65E5", 0x31 },
    }; 
	    void	aaaaaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaaaaitems;

        if (aaaaaaitems.empty())
            for (const aaaaaaItem &i : g_aaaaaaitems)
                aaaaaaitems.push_back(i.aaaaaaname);

        Keyboard    keyboard("\u6A5F\u80FD\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaaaaaitems);
        int         aaaaaachoice = keyboard.Open();

        if (aaaaaachoice >= 0)
            Process::Write8(0x006D3064, g_aaaaaaitems[aaaaaachoice].aaaaaaid);	
		}
		
void	kamera(MenuEntry *entry)
{
	   float inz;
	   float inx;
		  if(Process:: ReadFloat(0x3309C170, inz))
		 if(Process:: ReadFloat(0x3309C168, inx))
		{
              if (Controller::IsKeysDown(DPadUp))
		 {
		   inz = inz - 9.0;
		    if(Process:: WriteFloat(0x3309C170, inz));
		}
		if (Controller::IsKeysDown(DPadDown))
		{
		   inz = inz + 9.0;
           if(Process:: WriteFloat(0x3309C170, inz));
		}
		 if (Controller::IsKeysDown(DPadLeft))
		 {
		   inx = inx - 9.0;
		    if(Process:: WriteFloat(0x3309C168, inx));
		}
		if (Controller::IsKeysDown(DPadRight))
		{
		   inx = inx + 9.0;
		    if(Process:: WriteFloat(0x3309C168, inx));
		}
         }
		 }
		 
void Kannnacheats(MenuEntry *entry)
{  
if (entry->Hotkeys[0].IsDown())
	{
    float outz;
    float outx;
    float aoutz;
    float aoutx;
      
    float b;
    float c;       
    float d;
    float e;
    float f;       
    float aa;

    if(Process::ReadFloat(0x33099E58, outz))
        if(Process::ReadFloat(0x33099E50, outx))
            if(Process::ReadFloat(0x3309BC18, aoutz))
                Process::ReadFloat(0x3309BC10, aoutx);
        
    b = outz - aoutz;
    c = outx - aoutx;
     
    if (outz > aoutz)
    {  
        b = outz - aoutz;
        if (b < 10.0)
        {    
            outz = outz - 5.0;
            if(Process::WriteFloat(0x33099E58, outz));
                b = outz - aoutz;
        }
    }  
    else 
    {    
        b = outz - aoutz;    
        if (b < -10.0)
        {
            outz = outz + 5.0; 
            if(Process::WriteFloat(0x33099E58, outz));
                b = outz - aoutz;
        }
    }  

    if (outx > aoutx)
    { 
        c = outx - aoutx;
        if (c < 10.0)
        {
            outx = outx - 5.0; 
            if(Process::WriteFloat(0x33099E50, outx));
                c = outx - aoutx; 
        }
    }  
    else 
    {     
        c = outx - aoutx;  
        if (c < -10.0)
        {
            outx = outx + 5.0; 
            if(Process::WriteFloat(0x33099E50, outx));
                c = outx - aoutx; 
        }
    }
}
}

void Kannnacheats2(MenuEntry *entry)
{  
if (entry->Hotkeys[0].IsDown())
{
         float outz;
         float outx;
         int a;  
          float aaoutz;
	   
          float aaoutx;

		  
		   
           float b;
          float c;	   
          float d;
		   float e;
          float f;	   
          float aa;

    if(Process:: ReadFloat(0x33099E58, outz))
    if(Process:: ReadFloat(0x33099E50, outx))

      if(Process:: ReadFloat(0x3309CD68, aaoutz))
		 
      if(Process:: ReadFloat(0x3309CD60, aaoutx))

		d = outz - aaoutz;
		e = outx - aaoutx;
	
  {     
		{
       if (outz > aaoutz)
       {    
	       d = outz - aaoutz;
	          if (d < 10.0)
	        {
                outz = outz - 5.0; 
				if(Process:: WriteFloat(0x33099E58, outz));
				 d = outz - aaoutz;
			}
        }  
        else 
        {    
		    d = outz - aaoutz;
		      if (d < -10.0)
	        {
                outz = outz + 5.0 ;
				if(Process:: WriteFloat(0x33099E58, outz));
				 d = outz - aaoutz;
			}
         }  
      if (outx > aaoutx)
       {   
	        e = outx - aaoutx;
	          if (e < 10.0)
	        {
                outx = outx - 5.0; 
				if(Process:: WriteFloat(0x33099E50, outx));
				e = outx - aaoutx;
		    }
        }  
        else 
        {    
		    e = outx - aaoutx;
		     if (e < -10.0)
	        {
                outx = outx + 5.0; 
				if(Process:: WriteFloat(0x33099E50, outx));
				e = outx - aaoutx;
			}
         }
         }  
        
} 

}
}

void Kannnacheats3(MenuEntry *entry)
{  
if (entry->Hotkeys[0].IsDown())
{
         float outz;
         float outx;
  
         int a;  
         
          float aaaoutz;
	   
          float aaaoutx;
		  
		   
           float b;
          float c;	   
          float d;
		   float e;
          float f;	   
          float aa;

    if(Process:: ReadFloat(0x33099E58, outz))
    if(Process:: ReadFloat(0x33099E50, outx))

      if(Process:: ReadFloat(0x3309DEB4, aaaoutz))
		 
      if(Process:: ReadFloat(0x3309DEAC, aaaoutx))

		f = outz - aaaoutz;
		aa = outx - aaaoutx;

         if (outz > aaaoutz)
       {        
	             if (f < 10.0)
	        {
                outz = outz - 5.0; 
				if(Process:: WriteFloat(0x33099E58, outz));
				f = outz - aaaoutz;
		    }
        }  
        else 
        { 
		   f = outz - aaaoutz;
		         if (f < -10.0)
	        {
                outz = outz + 5.0; 
				if(Process:: WriteFloat(0x33099E58, outz));
				f = outz - aaaoutz;
			}
         }  
      if (outx > aaaoutx)
       { 
	        aa = outx - aaaoutx;
	            if (aa < 10.0)
	        {
                outx = outx - 5.0; 
				if(Process:: WriteFloat(0x33099E50, outx));
				 aa = outx - aaaoutx;
			}
        }  
        else 
        { 
		    aa = outx - aaaoutx;
		       if (aa < -10.0)
	        {
                outx = outx + 5.0; 
				if(Process:: WriteFloat(0x33099E50, outx));
				 aa = outx - aaaoutx;
			}
         }
         }  
}
		 
		 
		 	 /////ここまでがおにごよう
	void robot(MenuEntry *entry)
	{
	     float outz;
         float outx;
		  float koutz;
         float koutx;

		 u32 aoutz;
		 u32 aoutx;
		 u32 akoutz;
		 u32 akoutx;
		 
		 
		 if(Process:: ReadFloat(0x33099E58, outz))
         if(Process:: ReadFloat(0x33099E50, outx))
         if(Process:: ReadFloat(0x330A4474, koutz))		 
         if(Process:: ReadFloat(0x330A446C, koutx))
		 
		 if(Process:: Read32(0x33099E58, aoutz))
         if(Process:: Read32(0x33099E50, aoutx))
         if(Process:: Read32(0x330A4474, akoutz))		 
         if(Process:: Read32(0x330A446C, akoutx))
		 
		 
		 if (Controller::IsKeysDown(L + X))
		 {
		     entry->Disable();
		 }
		 
		 
	
		{
	    if (Controller::IsKeysDown(R + X))
		{
		   koutz = koutz - 9.0;
		    if(Process:: WriteFloat(0x330A4474, koutz));
		}
		if (Controller::IsKeysDown(R + B))
		{
		   koutz = koutz + 9.0;
		    if(Process:: WriteFloat(0x330A4474, koutz));
		}
		 if (Controller::IsKeysDown(R + Y))
		 {
		   koutx = koutx - 9.0;
		    if(Process:: WriteFloat(0x330A446C, koutx));
		}
		if (Controller::IsKeysDown(R + A))
		{
		   koutx = koutx + 9.0;
		    if(Process:: WriteFloat(0x330A446C, koutx));
		}
	}
	//ロボット追い掛ける
        
}

    void robot1(MenuEntry *entry)
	{
	     u32 akoutz;
		 u32 akoutx;
		 
		 if(Process:: Read32(0x330A4474, akoutz))		 
         if(Process:: Read32(0x330A446C, akoutx))
	    
		 {
		    if(Process:: Write32(0x330A4474, akoutz));
            if(Process:: Write32(0x330A446C, akoutx));
			   OSD::Notify("Stop");
		 }
	}
	
	void robot2(MenuEntry *entry)
	{
	     u32 akoutz;
		 u32 akoutx;
		 
		 if(Process:: Read32(0x330A4474, akoutz))		 
         if(Process:: Read32(0x330A446C, akoutx))
	    
		 {
		    if(Process:: Write32(0x33099E58, akoutz));
            if(Process:: Write32(0x33099E50, akoutx));
		 }
	}
	
	void onrobot(MenuEntry *entry)
	{
	     float outz;
         float outx;
		  float koutz;
         float koutx;

		 u32 aoutz;
		 u32 aoutx;
		 u32 akoutz;
		 u32 akoutx;
		 
		 
		 if(Process:: ReadFloat(0x33099E58, outz))
         if(Process:: ReadFloat(0x33099E50, outx))
         if(Process:: ReadFloat(0x330A45B4, koutz))		 
         if(Process:: ReadFloat(0x330A45AC, koutx))
		 
		 if(Process:: Read32(0x33099E58, aoutz))
         if(Process:: Read32(0x33099E50, aoutx))
         if(Process:: Read32(0x330A4474, akoutz))		 
         if(Process:: Read32(0x330A446C, akoutx))
		 
		 
		 if (Controller::IsKeysDown(L + X))
		 {
		     entry->Disable();
		 }
		 
		 
	
		{
	    if (Controller::IsKeysDown(R + X))
		{
		   koutz = koutz - 9.0;
		    if(Process:: WriteFloat(0x330A45B4, koutz));
		}
		if (Controller::IsKeysDown(R + B))
		{
		   koutz = koutz + 9.0;
		    if(Process:: WriteFloat(0x330A45B4, koutz));
		}
		 if (Controller::IsKeysDown(R + Y))
		 {
		   koutx = koutx - 9.0;
		    if(Process:: WriteFloat(0x330A45AC, koutx));
		}
		if (Controller::IsKeysDown(R + A))
		{
		   koutx = koutx + 9.0;
		    if(Process:: WriteFloat(0x330A45AC, koutx));
		}
	}
	}
	//ロボット追い掛ける
	
	void onrobot2(MenuEntry *entry)
	{
	     u32 akoutz;
		 u32 akoutx;
		 
		 if(Process:: Read32(0x330A45B4, akoutz))		 
         if(Process:: Read32(0x330A45AC, akoutx))
	    
		 {
		    if(Process:: Write32(0x33099E58, akoutz));
            if(Process:: Write32(0x33099E50, akoutx));
		 }
	}
	
	void abcd(MenuEntry *entry)
	{
	 u32 offset;
	 u32 data;
	 u32 data32;
	 u32 cmp32;
	 u16 cmp16;
	 u16 data16;
	 u8 data8;
	 offset = 0x00000000;
if (Process::Read32(offset + 0x0986500, cmp32) && cmp32 != 0x00000000)
{
	Process::Read32(offset + 0x0986500, offset);
	Process::Read32(offset + 0x00000044, data32);
	offset = 0x00000000;
	Process::Write32(offset + 0x00838F00, data32);
	offset = 0x00000000;
	if (Process::Read32(offset + 0x0986500, cmp32) && cmp32 != 0x00000000)
	{
		Process::Read32(offset + 0x0986500, offset);
		Process::Read32(offset + 0x00000048, data32);
		offset = 0x00000000;
		Process::Write32(offset + 0x00838F04, data32);
		offset = 0;
		data32 = 0;
		data16 = 0;
		data8 = 0;
	}
	offset = 0x00000000;
	data32 = 0x00000000;
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000030)
	{
		data32 += 0x00000000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000031)
	{
		data32 += 0x00001000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000032)
	{
		data32 += 0x00002000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000033)
	{
		data32 += 0x00003000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000034)
	{
		data32 += 0x00004000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000035)
	{
		data32 += 0x00005000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000036)
	{
		data32 += 0x00006000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000037)
	{
		data32 += 0x00007000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000038)
	{
		data32 += 0x00008000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000039)
	{
		data32 += 0x00009000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000041)
	{
		data32 += 0x0000A000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000042)
	{
		data32 += 0x0000B000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000043)
	{
		data32 += 0x0000C000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000044)
	{
		data32 += 0x0000D000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000045)
	{
		data32 += 0x0000E000;
	}
	if (Process::Read16(offset + 0x0838F00, cmp16) && cmp16 == 0x00000046)
	{
		data32 += 0x0000F000;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000030)
	{
		data32 += 0x00000000;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000031)
	{
		data32 += 0x00000100;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000032)
	{
		data32 += 0x00000200;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000033)
	{
		data32 += 0x00000300;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000034)
	{
		data32 += 0x00000400;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000035)
	{
		data32 += 0x00000500;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000036)
	{
		data32 += 0x00000600;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000037)
	{
		data32 += 0x00000700;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000038)
	{
		data32 += 0x00000800;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000039)
	{
		data32 += 0x00000900;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000041)
	{
		data32 += 0x00000A00;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000042)
	{
		data32 += 0x00000B00;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000043)
	{
		data32 += 0x00000C00;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000044)
	{
		data32 += 0x00000D00;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000045)
	{
		data32 += 0x00000E00;
	}
	if (Process::Read16(offset + 0x0838F02, cmp16) && cmp16 == 0x00000046)
	{
		data32 += 0x00000F00;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000030)
	{
		data32 += 0x00000000;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000031)
	{
		data32 += 0x00000010;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000032)
	{
		data32 += 0x00000020;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000033)
	{
		data32 += 0x00000030;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000034)
	{
		data32 += 0x00000040;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000035)
	{
		data32 += 0x00000050;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000036)
	{
		data32 += 0x00000060;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000037)
	{
		data32 += 0x00000070;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000038)
	{
		data32 += 0x00000080;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000039)
	{
		data32 += 0x00000090;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000041)
	{
		data32 += 0x000000A0;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000042)
	{
		data32 += 0x000000B0;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000043)
	{
		data32 += 0x000000C0;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000044)
	{
		data32 += 0x000000D0;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000045)
	{
		data32 += 0x000000E0;
	}
	if (Process::Read16(offset + 0x0838F04, cmp16) && cmp16 == 0x00000046)
	{
		data32 += 0x000000F0;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000030)
	{
		data32 += 0x00000000;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000031)
	{
		data32 += 0x00000001;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000032)
	{
		data32 += 0x00000002;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000033)
	{
		data32 += 0x00000003;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000034)
	{
		data32 += 0x00000004;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000035)
	{
		data32 += 0x00000005;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000036)
	{
		data32 += 0x00000006;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000037)
	{
		data32 += 0x00000007;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000038)
	{
		data32 += 0x00000008;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000039)
	{
		data32 += 0x00000009;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000041)
	{
		data32 += 0x0000000A;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000042)
	{
		data32 += 0x0000000B;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000043)
	{
		data32 += 0x0000000C;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000044)
	{
		data32 += 0x0000000D;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000045)
	{
		data32 += 0x0000000E;
	}
	if (Process::Read16(offset + 0x0838F06, cmp16) && cmp16 == 0x00000046)
	{
		data32 += 0x0000000F;
	}
	if (Controller::IsKeysDown(Y + DPadUp))
	{
		offset = 0x00000000;
		if (Process::Read32(offset + 0x0AA914C, cmp32) && cmp32 != 0x00000000)
		{
			Process::Read32(offset + 0x0AA914C, offset);
			Process::Write32(offset + 0x00006BD0, data32);
		
			offset = 0;
			data32 = 0;
			data16 = 0;
			data8 = 0;
		}
	}
	if (Controller::IsKeysDown(Y + DPadDown))
	{
		offset = 0x00000000;
		if (Process::Read32(offset + 0x0AA914C, cmp32) && cmp32 != 0x00000000)
		{
			Process::Read32(offset + 0x0AA914C, offset);
			Process::Write32(offset + 0x00006BD0, data32);
			Process::Write32(offset + 0x00006BD4, data32);
			Process::Write32(offset + 0x00006BD8, data32);
			Process::Write32(offset + 0x00006BDC, data32);
			Process::Write32(offset + 0x00006BE0, data32);
			Process::Write32(offset + 0x00006BE4, data32);
			Process::Write32(offset + 0x00006BE8, data32);
			Process::Write32(offset + 0x00006BEC, data32);
			Process::Write32(offset + 0x00006BF0, data32);
			Process::Write32(offset + 0x00006BF4, data32);
			Process::Write32(offset + 0x00006BF8, data32);
			Process::Write32(offset + 0x00006BFC, data32);
			Process::Write32(offset + 0x00006C00, data32);
			Process::Write32(offset + 0x00006C04, data32);
			Process::Write32(offset + 0x00006C08, data32);
			Process::Write32(offset + 0x00006C0C, data32);
			Process::Write32(0x007238C0, 0xE1A00000);
		
		
			offset = 0;
			data32 = 0;
			data16 = 0;
			data8 = 0;
		}
	}
	
	if (Controller::IsKeysDown(A + DPadDown))
	{
		offset = 0x00000000;
		if (Process::Read32(offset + 0x0AA914C, cmp32) && cmp32 != 0x00000000)
		{
			Process::Read32(offset + 0x0AA914C, offset);
			Process::Write32(offset + 0x00006BD0, data32);
			Process::Write32(offset + 0x00006BD4, data32);
			Process::Write32(offset + 0x00006BD8, data32);
			Process::Write32(offset + 0x00006BDC, data32);
			Process::Write32(offset + 0x00006BE0, data32);
			Process::Write32(offset + 0x00006BE4, data32);
			Process::Write32(offset + 0x00006BE8, data32);
			Process::Write32(offset + 0x00006BEC, data32);
			Process::Write32(offset + 0x00006BF0, data32);
			Process::Write32(offset + 0x00006BF4, data32);
			Process::Write32(offset + 0x00006BF8, data32);
			Process::Write32(offset + 0x00006BFC, data32);
			Process::Write32(offset + 0x00006C00, data32);
			Process::Write32(offset + 0x00006C04, data32);
			Process::Write32(offset + 0x00006C08, data32);
			Process::Write32(offset + 0x00006C0C, data32);
			Process::Write32(0x007238C0, 0xE1A00000);
		
		
			offset = 0;
			data32 = 0;
			data16 = 0;
			data8 = 0;
		}
	}


	 
}
}
void	itemmugen(MenuEntry *entry)
{
		static bool pressed = false;
	    if (Controller::IsKeysDown(Y + DPadUp) && pressed==false)
		{
			pressed=true;
		    if(Process:: Write32(0x0019C4D0, 0x00000000));
		    if(Process:: Write32(0x0019C42C, 0x00000000));
			OSD::Notify("item: " << Color::Green << "ON!");
		}

		 if (Controller::IsKeysDown(Y + DPadDown) && pressed==false)
		 {
			pressed=true;
		    if(Process:: Write32(0x0019C4D0, 0xEB057D0A));
		    if(Process:: Write32(0x0019C42C, 0xEB057D33));
			OSD::Notify("infitem: " << Color::Red << "OFF!");
		}
		
		if (!Controller::IsKeysDown(Y + DPadDown) && !Controller::IsKeysDown(Y + DPadUp))
	    {
			pressed=false;
		}
}
		

void    toreru(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(Y + DPadUp) && pressed==false)
    {
        pressed=true;
        if(Process:: Write32(0x005989FC, 3925868592));
            OSD::Notify("Pick Up ON");
    }
    
    if (Controller::IsKeysDown(Y + DPadDown) && pressed==false)
    {
        pressed=true;
        if(Process:: Write32(0x005989FC, 167772228));
            OSD::Notify("Pick Up OFF");
    }

    if (!Controller::IsKeysDown(Y + DPadDown) && !Controller::IsKeysDown(Y + DPadUp))
    {
        pressed=false;
    }        
}
void    Tpose(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(B + DPadUp) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x0073AA30, 0xE1A00000);
        OSD::Notify("T-Pose: " << Color::Green << "ON");
    }

    if (Controller::IsKeysDown(B + DPadDown) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x0073AA30, 0x0A000011);
        OSD::Notify("T-Pose: " << Color::Red << "OFF");
    }

    if (!Controller::IsKeysDown(B + DPadDown) && !Controller::IsKeysDown(B + DPadUp))
    {
        pressed=false;
    }
}

void    Wallkantu(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(L + DPadRight) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x0064EEF4, 0xEA000094);
		Process::Write32(0x0064EF0C, 0xEA000052);
		Process::Write32(0x0064F070, 0xEA000001);
		Process::Write32(0x0064F0E8, 0xEA000014);
		Process::Write32(0x0064F19C, 0xE1A00000);
		Process::Write32(0x0064F1B4, 0xE1A00000);
		Process::Write32(0x0064F1B8, 0xEA000026);
		Process::Write32(0x0064F1E4, 0xEA000065);
        OSD::Notify("Walk Over Object:" << Color::Green << "ON");
    }

    if (Controller::IsKeysDown(L + DPadLeft) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x0064EEF4, 0x0A000094);
		Process::Write32(0x0064EF0C, 0x0A000052);
		Process::Write32(0x0064F070, 0x0A000001);
		Process::Write32(0x0064F0E8, 0xDA000014);
		Process::Write32(0x0064F19C, 0xED841A05);
		Process::Write32(0x0064F1B4, 0xED840A07);
		Process::Write32(0x0064F1B8, 0x0A000026);
		Process::Write32(0x0064F1E4, 0x0A000065);
        OSD::Notify("Walk Over Object:" << Color::Red << "OFF");
    }

    if (!Controller::IsKeysDown(L + DPadLeft) && !Controller::IsKeysDown(L + DPadRight))
    {
        pressed=false;
    }
}
void    FDB(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(R + DPadUp) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x00596890, 0xE3A0001D);
        OSD::Notify("Flowers Don't Break:" << Color::Green << "ON");
    }

    if (Controller::IsKeysDown(R + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x00596890, 0xEBF5990F);
        OSD::Notify("Flowers Don't Break:" << Color::Red << "OFF");
    }
	    if (!Controller::IsKeysDown(R + DPadUp) && !Controller::IsKeysDown(R + DPadDown))
    {
        pressed=false;
    }
}
void    botusopakamenu(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(L + DPadUp) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x31F4F1CC, 0x180000A8);
        OSD::Notify("" << Color::Green << "Added menu");
    }

    if (Controller::IsKeysDown(L + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x31F4F1CC, 0xFF0000A8);
        OSD::Notify("" << Color::Red << "Restore menu");
    }
	    if (!Controller::IsKeysDown(L + DPadUp) && !Controller::IsKeysDown(L + DPadDown))
    {
        pressed=false;
    }
}
void  dream1(MenuEntry *entry)
{
    Keyboard        keyboard("Dream 1");
    u16 a;
	u8 b;
	u8 c;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write16(0x080E0000, a);
		Process::Read8(0x080E0000, b);
		Process::Read8(0x080E0001, c);
		Process::Write8(0x31F4F199, c);
		Process::Write8(0x31F4F194, b);
    }
	entry->Disable();
}
void  dream2(MenuEntry *entry)
{
    Keyboard        keyboard("Dream 2");
    u16 a;
	u8 b;
	u8 c;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write16(0x080E0002, a);
		Process::Read8(0x080E0002, b);
		Process::Read8(0x080E0003, c);
		Process::Write8(0x31F4F193, c);
		Process::Write8(0x31F4F192, b);
    }
	entry->Disable();
}

void  dream3(MenuEntry *entry)
{
    Keyboard        keyboard("Dream 3");
    u16 a;
	u8 b;
	u8 c;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write16(0x080E0004, a);
		Process::Read8(0x080E0004, b);
		Process::Read8(0x080E0005, c);
		Process::Write8(0x31F4F191, c);
		Process::Write8(0x31F4F190, b);
    }
	entry->Disable();
}

void  nen(MenuEntry *entry)
{
    Keyboard        keyboard("year");
    u16 a;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write16(0x31F4F076, a);
    }
	entry->Disable();
}

void  tuki(MenuEntry *entry)
{
    Keyboard        keyboard("month");
    u8 a;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write8(0x31F4F078, a);
    }
	entry->Disable();
}

void  hi(MenuEntry *entry)
{
    Keyboard        keyboard("day");
    u8 a;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write8(0x31F4F079, a);
    }
	entry->Disable();
}

void  tantuki(MenuEntry *entry)
{
    Keyboard        keyboard("month");
    u8 a;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write8(0x31F4F074, a);
    }
	entry->Disable();
}
void  tanday(MenuEntry *entry)
{
    Keyboard        keyboard("day");
    u8 a;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write8(0x31F4F075, a);
    }
	entry->Disable();
}

void  shushin(MenuEntry *entry)
{
    Keyboard        keyboard("01 Japan");
    u16 a;
 
    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
		Process::Write16(0x31F4F072, a);
    }
	entry->Disable();
}
void    QuickMode(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(R + DPadUp) && pressed==false)
    {     
        pressed=true;
        Process::Write32(0x0065FA2A, 0x00004050);
		Process::Write32(0x0065F626, 0x00005000);
		Process::Write32(0x00668E8E, 0x00004050);
		Process::Write32(0x0066930A, 0x00004050);
		Process::Write32(0x0066ED66, 0x00004050);
		Process::Write32(0x00676C52, 0x00004050);
		Process::Write32(0x0065F7C2, 0x00004050);
		Process::Write32(0x0067A2C2, 0x00004050);
		Process::Write32(0x0067AD1E, 0x00004050);
		Process::Write32(0x00668D46, 0x00004050);
		Process::Write32(0x00687DC6, 0x00004050);
        OSD::Notify("Quick Mode:" << Color::Green << "ON");
    }

    if (Controller::IsKeysDown(R + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x0065FA2A, 0x00003F80);
		Process::Write32(0x0065F626, 0x00003F80);
		Process::Write32(0x00668E8E, 0x00003F80);
		Process::Write32(0x0066930A, 0x00003F80);
		Process::Write32(0x0066ED66, 0x00003F80);
		Process::Write32(0x00676C52, 0x00003F80);
		Process::Write32(0x0065F7C2, 0x00003F80);
		Process::Write32(0x0067A2C2, 0x00003F80);
		Process::Write32(0x0067AD1E, 0x00003F80);
		Process::Write32(0x00668D46, 0x00003F80);
		Process::Write32(0x00687DC6, 0x00003F80);
        OSD::Notify("Quick Mode:" << Color::Red << "OFF");
    }

    if (!Controller::IsKeysDown(R + DPadDown) && !Controller::IsKeysDown(R + DPadUp))
    {
        pressed=false;
    }
}
}