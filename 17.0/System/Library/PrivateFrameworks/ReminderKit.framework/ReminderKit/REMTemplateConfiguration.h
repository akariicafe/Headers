@class REMObjectID;

@interface REMTemplateConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *sourceListID;
@property (readonly, nonatomic) BOOL shouldSaveCompleted;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceListID:(id)a0 shouldSaveCompleted:(BOOL)a1;

@end
