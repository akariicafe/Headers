@class NSURL, NSString, NSInputStream;
@protocol TSUReadChannel;

@interface TSPDataCopyProviderConcrete : NSObject <TSPDataCopyProvider, TSPDataCopyURLProvider, TSPDataCopyReadChannelProvider, TSPDataCopyInputSteamProvider>

@property (retain, nonatomic) NSURL *directory;
@property (retain, nonatomic) NSURL *URLInternal;
@property (retain, nonatomic) id<TSUReadChannel> readChannelInternal;
@property (retain, nonatomic) NSInputStream *inputStreamInternal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) id<TSUReadChannel> readChannel;
@property (readonly, nonatomic) NSInputStream *inputStream;

@end
