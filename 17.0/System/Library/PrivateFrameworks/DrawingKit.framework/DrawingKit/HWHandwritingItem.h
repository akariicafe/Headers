@class NSUUID, DKDrawing, NSDate;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *uuid;
@property (retain) NSDate *creationDate;
@property (retain) DKDrawing *drawing;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDrawing:(id)a0;

@end
