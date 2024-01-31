@class UIColor, NSMutableDictionary, NSMutableArray;

@interface ICCollaborationColorManager : NSObject

@property (class, readonly, copy, nonatomic) UIColor *defaultColor;

@property (retain, nonatomic) NSMutableDictionary *userIDToColorsDict;
@property (retain, nonatomic) NSMutableArray *colorUsageCounts;
@property (nonatomic) unsigned long long colorUsageCountMinimum;

+ (id)participantColors;

- (id)init;
- (void).cxx_destruct;
- (id)baseColorValuesForUserID:(id)a0;
- (id)containerScopedUserRecordNameForAccount:(id)a0;
- (id)highlightColorForUserID:(id)a0 note:(id)a1;
- (id)participantAXDisplayNameForUserID:(id)a0 forNote:(id)a1;

@end
