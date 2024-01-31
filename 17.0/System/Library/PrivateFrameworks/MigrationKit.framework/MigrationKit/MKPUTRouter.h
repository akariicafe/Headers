@class NSArray, NSString, NSDictionary, NSMutableArray;
@protocol MKPUTRouterDelegate;

@interface MKPUTRouter : NSObject <MKHTTPRouter> {
    NSDictionary *_routing;
}

@property (retain, nonatomic) NSMutableArray *supportedContentTypes;
@property (retain, nonatomic) NSArray *supportedTransferEncodings;
@property (weak, nonatomic) id<MKPUTRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
