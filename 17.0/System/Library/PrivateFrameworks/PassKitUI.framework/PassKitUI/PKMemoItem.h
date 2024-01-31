@class NSString, PKPeerPaymentRecurringPaymentMemo;
@protocol NSCopying;

@interface PKMemoItem : NSObject <PKIdentifiable>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentMemo *memo;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMemo:(id)a0 type:(unsigned long long)a1;

@end
