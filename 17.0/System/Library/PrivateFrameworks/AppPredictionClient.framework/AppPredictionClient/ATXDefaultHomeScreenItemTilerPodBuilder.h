@class NSArray, NSString, ATXDefaultHomeScreenItemTilerHelper, NSMutableArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemTilerPodBuilder : NSObject <ATXDefaultHomeScreenItemTiler>

@property (retain, nonatomic) ATXDefaultWidgetStack *defaultStack;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsSmall;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsMedium;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsLarge;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsExtraLarge;
@property (nonatomic) unsigned long long widgetFamilyMask;
@property (retain, nonatomic) ATXDefaultHomeScreenItemTilerHelper *tilerHelper;
@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefaultStack:(id)a0 defaultWidgetsSmall:(id)a1 defaultWidgetsMedium:(id)a2 defaultWidgetsLarge:(id)a3 defaultWidgetsExtraLarge:(id)a4 widgetFamilyMask:(unsigned long long)a5;
- (void).cxx_destruct;
- (unsigned long long)_addPod:(id)a0 podType:(unsigned long long)a1 podsAdded:(unsigned long long)a2;
- (unsigned long long)_addPodTypeFourSmalls:(id)a0;
- (unsigned long long)_addPodTypeOneExtraLarge:(id)a0 podsAdded:(unsigned long long)a1;
- (unsigned long long)_addPodTypeOneLarge:(id)a0;
- (unsigned long long)_addPodTypeOneMediumAndTwoSmalls:(id)a0;
- (unsigned long long)_addPodTypeTwoMediums:(id)a0;
- (unsigned long long)_addPodTypeTwoSmallsAndOneMedium:(id)a0;
- (unsigned long long)addFirstPod:(id)a0;
- (unsigned long long)addPod:(id)a0 podType:(unsigned long long)a1 allowAlternatePodTypeAsBackup:(BOOL)a2 podsAdded:(unsigned long long)a3;

@end
