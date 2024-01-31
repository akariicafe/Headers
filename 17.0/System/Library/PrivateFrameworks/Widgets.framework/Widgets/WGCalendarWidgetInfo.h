@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo

@property (retain, nonatomic, setter=_setDate:) NSDate *date;

+ (BOOL)isCalendarExtension:(id)a0;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange:(id)a0;
- (void)_resetIconsImpl;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)a0 extension:(id)a1;
- (id)_queue_iconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 forWidgetWithIdentifier:(id)a2 extension:(id)a3;

@end
