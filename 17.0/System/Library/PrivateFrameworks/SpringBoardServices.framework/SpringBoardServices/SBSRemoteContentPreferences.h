@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {
    long long _dateTimeStyle;
    long long _backgroundStyle;
    long long _homeGestureMode;
    long long _preferredNotificationListMode;
    BOOL _reducesWhitePoint;
    BOOL _suppressesNotifications;
    BOOL _suppressesBottomEdgeContent;
    BOOL _dismissesOnTap;
    BOOL _prefersInlinePresentation;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (long long)backgroundStyle;
- (void)encodeWithCoder:(id)a0;
- (long long)dateTimeStyle;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)homeGestureMode;
- (BOOL)dismissesOnTap;
- (long long)preferredNotificationListMode;
- (BOOL)prefersInlinePresentation;
- (BOOL)reducesWhitePoint;
- (BOOL)suppressesBottomEdgeContent;
- (BOOL)suppressesNotifications;

@end
