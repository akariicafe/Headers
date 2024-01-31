@class NSString;

@interface MUBlockActivity : UIActivity

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) NSString *type;

+ (id)createBlockActivitiesFromPlaceActionItems:(id)a0 usingActionManager:(id)a1 presentationOptions:(id)a2 analyticsModuleMetadata:(id)a3;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 activityType:(id)a2 block:(id /* block */)a3;

@end
