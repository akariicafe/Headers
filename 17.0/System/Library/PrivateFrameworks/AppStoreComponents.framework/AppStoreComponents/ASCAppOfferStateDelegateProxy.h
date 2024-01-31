@class NSString;
@protocol ASCAppOfferStateDelegate;

@interface ASCAppOfferStateDelegateProxy : NSObject <ASCAppOfferStateDelegate>

@property (readonly, weak, nonatomic) id<ASCAppOfferStateDelegate> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
