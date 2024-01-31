@class GCCursorElement, NSArray;
@protocol GCDirectionPadElement, GCButtonElement;

@interface GCMouseInputState : _GCDevicePhysicalInputFacade

@property (readonly, nonatomic) GCCursorElement *cursor;
@property (readonly, nonatomic) id<GCDirectionPadElement> scrollWheel;
@property (readonly, nonatomic) id<GCButtonElement> primaryButton;
@property (readonly, nonatomic) id<GCButtonElement> secondaryButton;
@property (readonly, nonatomic) id<GCButtonElement> thirdButton;
@property (readonly, nonatomic) NSArray *auxiliaryButtons;

- (void).cxx_destruct;
- (id)scroll;

@end
