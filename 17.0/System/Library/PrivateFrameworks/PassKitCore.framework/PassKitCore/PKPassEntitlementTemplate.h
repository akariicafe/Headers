@class NSString, NSDictionary, NSBundle;

@interface PKPassEntitlementTemplate : NSObject {
    NSDictionary *_rawDictionary;
    NSBundle *_bundle;
    NSDictionary *_fieldInserts;
}

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedGroup;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) long long groupRenderingPriority;
@property (readonly, nonatomic) BOOL clearGroupWhenSelected;

- (void).cxx_destruct;
- (id)_stringReplacingPlaceholdersInString:(id)a0 withInserts:(id)a1;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (void)setFieldInserts:(id)a0;

@end
