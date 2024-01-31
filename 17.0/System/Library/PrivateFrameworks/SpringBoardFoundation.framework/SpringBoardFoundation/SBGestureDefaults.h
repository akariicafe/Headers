@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL multitaskingGesturesRequireEducation;
@property (readonly, nonatomic, getter=isSystemGesturesAllowed) BOOL systemGesturesAllowed;
@property (readonly, nonatomic) BOOL productivityGesturesRequireEducation;
@property (readonly, nonatomic) BOOL productivityGesturesAllowed;
@property (retain, nonatomic) NSArray *systemGestureLoggingOptions;

@end
