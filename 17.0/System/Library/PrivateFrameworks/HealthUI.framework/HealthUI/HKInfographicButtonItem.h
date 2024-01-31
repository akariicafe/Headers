@class NSString, UIButtonConfiguration;

@interface HKInfographicButtonItem : NSObject <HKInfographicItem>

@property (copy, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) id /* block */ buttonTapHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 buttonTapHandler:(id /* block */)a1;

@end
