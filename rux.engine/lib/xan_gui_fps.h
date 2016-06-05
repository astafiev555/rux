#ifndef XAN_GUI_FPS_H
#define XAN_GUI_FPS_H
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include<xan_types.h>
namespace rux
{
	namespace gui
	{
		namespace engine
		{			
			class Fps
			{
			private:
				::rux::uint32 _frames_count;
				::rux::uint64 _start_time;
				::rux::uint64 _last_frame_time;
			public:
				Fps( void );
				rux::uint64 get_Runtime( void );
				void Increment( void );
				double get_FPS( void );
				void Reset( void );
			};			
		};
	};
};
#endif
