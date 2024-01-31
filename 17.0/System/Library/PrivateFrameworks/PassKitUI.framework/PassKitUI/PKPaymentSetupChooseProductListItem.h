@class NSString;

@interface PKPaymentSetupChooseProductListItem : NSObject <PKIdentifiable>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL loadingIndicatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 title:(id)a2 subtitle:(id)a3;

@end
