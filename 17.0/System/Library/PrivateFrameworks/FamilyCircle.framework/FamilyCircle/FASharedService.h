@class NSString, NSNumber, NSArray;

@interface FASharedService : NSObject

@property (readonly, nonatomic) BOOL isSeparator;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *order;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *subLabel;
@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic) NSString *iconURLString;
@property (readonly, nonatomic) NSString *iconURLStringx2;
@property (readonly, nonatomic) NSString *iconURLStringx3;
@property (readonly, nonatomic) NSString *actionURLString;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSArray *pageViews;
@property (readonly, nonatomic) NSArray *memberDetailsViewTypes;
@property (readonly, nonatomic) NSArray *subscriberDSIDs;
@property (readonly, nonatomic) NSString *ruiURL;

+ (id)sortedArray:(id)a0;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSharedService:(id)a0;

@end
