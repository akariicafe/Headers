@class UIStoryboard;

@interface _UIStoryboardProxy : NSObject <NSSecureCoding> {
    UIStoryboard *_storyboard;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithStoryboard:(id)a0;

@end
