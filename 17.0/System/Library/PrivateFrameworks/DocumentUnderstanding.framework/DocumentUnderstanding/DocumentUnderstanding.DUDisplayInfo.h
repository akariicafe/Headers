@interface DocumentUnderstanding.DUDisplayInfo : NSObject <NSCoding, NSCopying>

@property (nonatomic) void /* unknown type, empty encoding */ frameInWindow;
@property (nonatomic) void /* unknown type, empty encoding */ absoluteOriginOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ isOnScreen;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
