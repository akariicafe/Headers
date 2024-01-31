@class NSString, NSMutableArray, UIView;

@interface SXActionActivityGroup : NSObject <SXActionActivityGroup>

@property (retain, nonatomic) NSMutableArray *activities;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)addActivity:(id)a0;
- (id)initWithTitle:(id)a0 sourceView:(id)a1;

@end
