@class NSString, MRTextEditingAttributes;

@interface MRTextEditingSession : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) MRTextEditingAttributes *attributes;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 attributes:(id)a1;

@end
