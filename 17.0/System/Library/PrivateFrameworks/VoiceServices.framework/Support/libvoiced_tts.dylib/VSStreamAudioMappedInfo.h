@interface VSStreamAudioMappedInfo : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } audioBytesRange;
@property (nonatomic) unsigned long long packetCount;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } packetDescriptionsRange;

@end
