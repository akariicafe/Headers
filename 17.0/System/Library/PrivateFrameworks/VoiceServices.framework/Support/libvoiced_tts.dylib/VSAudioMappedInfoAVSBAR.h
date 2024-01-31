@class NSString;

@interface VSAudioMappedInfoAVSBAR : NSObject <VSAudioMappedInfo> {
    struct opaqueCMSampleBuffer { } *sampleBuffer;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } audioBytesRange;
@property (nonatomic) unsigned long long packetCount;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } packetDescriptionsRange;
@property (nonatomic) BOOL endOfSiriTTSUtterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
