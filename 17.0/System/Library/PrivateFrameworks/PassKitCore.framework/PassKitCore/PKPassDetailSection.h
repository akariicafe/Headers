@class NSString, NSArray;

@interface PKPassDetailSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSString *insertAfterSection;
@property (retain, nonatomic) NSArray *rows;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 allowedRows:(id)a1 bundle:(id)a2 privateBundle:(id)a3;
- (id)initWithRows:(id)a0;

@end
