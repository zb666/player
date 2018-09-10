//
// Created by Administrator on 2018/9/5.
//

#ifndef PLAYER_AUDIOCHANNEL_H
#define PLAYER_AUDIOCHANNEL_H


#include "BaseChannel.h"

class AudioChannel: public BaseChannel {
public:
    AudioChannel(int id,AVCodecContext *avCodecContext);
    void play();
};


#endif //PLAYER_AUDIOCHANNEL_H
