@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (retain, nonatomic) id placeholderUUID;
@property (readonly, nonatomic) NSDate *placeholderDate;

+ (id)sharedInstance;

- (unsigned long long)hash;
- (id)fileName;
- (id)uuid;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fileCreationDate;
- (long long)badgeType;
- (id)initWithPlaceholderDate:(id)a0;
- (BOOL)isEqualToImportPlaceholderViewModel:(id)a0;

@end
