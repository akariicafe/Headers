@class NSArray, NSDate;

@interface FigCaptureDisplayLayout : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) NSArray *foregroundApps;
@property (retain, nonatomic) NSArray *obscuredApps;
@property (retain, nonatomic) NSArray *transitioningApps;
@property (retain, nonatomic) NSArray *pipApps;
@property (nonatomic, getter=isSiriVisible) BOOL siriVisible;
@property (nonatomic, getter=isContactlessUIServiceVisible) BOOL contactlessUIServiceVisible;

+ (void)initialize;

- (void)dealloc;
- (id)_init;
- (id)description;
- (id)debugDescription;

@end
