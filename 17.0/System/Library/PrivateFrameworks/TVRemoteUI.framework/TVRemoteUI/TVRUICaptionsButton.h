@interface TVRUICaptionsButton : TVRUIButton

@property (nonatomic) BOOL captionsEnabled;

- (id)description;
- (void)layoutSubviews;
- (id)initWithCaptionsEnabled:(BOOL)a0;

@end
