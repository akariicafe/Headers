@class _GCHapticParameterCurve, _GCHapticTokenAndParams;

@interface _GCHapticSyntheticCommand : NSObject {
    unsigned short _type;
    double _time;
    unsigned long long _channelOrSeqID;
    unsigned long long _identifier;
}

@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) unsigned long long channelID;
@property (readonly, nonatomic) unsigned long long sequenceID;
@property (readonly, nonatomic) unsigned long long eventID;
@property (readonly, nonatomic) unsigned long long paramID;
@property (readonly, nonatomic) unsigned long long serverID;
@property (readonly, nonatomic) unsigned short command;
@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) _GCHapticParameterCurve *parameterCurve;
@property (readonly, nonatomic) _GCHapticTokenAndParams *tokenAndParams;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithHapticCommand:(const void *)a0;
- (void)preprocessCommand:(const void *)a0;

@end
