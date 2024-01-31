@class NSString;

@interface HKInfographicTitleDetailOptionalButtonItem : NSObject <HKInfographicItem>

@property (readonly, copy, nonatomic) NSString *titleString;
@property (readonly, copy, nonatomic) NSString *detailString;
@property (readonly, copy, nonatomic) NSString *buttonTextString;
@property (readonly, copy, nonatomic) id /* block */ buttonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detail:(id)a1 buttonTextString:(id)a2 buttonAction:(id /* block */)a3;

@end
