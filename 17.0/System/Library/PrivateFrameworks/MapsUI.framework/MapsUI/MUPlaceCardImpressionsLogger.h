@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MUPlaceCardImpressionsLogger : MUImpressionsLogger <MUImpressionsLogging> {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
