@class NSString, INImage, NSArray;

@interface INObjectSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *_identifier;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) INImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *items;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 items:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 image:(id)a3 items:(id)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 items:(id)a3;

@end
