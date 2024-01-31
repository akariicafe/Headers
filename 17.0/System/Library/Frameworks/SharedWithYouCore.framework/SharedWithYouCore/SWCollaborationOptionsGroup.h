@class NSString, NSArray;

@interface SWCollaborationOptionsGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSArray *options;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)optionsGroupWithIdentifier:(id)a0 options:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 options:(id)a1;
- (BOOL)isEqualToCollaborationOptionsGroup:(id)a0;

@end
