@class ATXDefaultWidgetStack, NSArray;

@interface ATXDefaultHomeScreenItemUpdate : NSObject

@property (readonly, nonatomic) ATXDefaultWidgetStack *stack;
@property (readonly, nonatomic) ATXDefaultWidgetStack *todayStack;
@property (readonly, nonatomic) NSArray *onboardingStacks;
@property (readonly, nonatomic) NSArray *smallWidgets;
@property (readonly, nonatomic) NSArray *mediumWidgets;
@property (readonly, nonatomic) NSArray *largeWidgets;
@property (readonly, nonatomic) NSArray *extraLargeWidgets;
@property (readonly, nonatomic) BOOL shouldSuggestStackInGallery;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithStack:(id)a0 todayStack:(id)a1 onboardingStacks:(id)a2 smallWidgets:(id)a3 mediumWidgets:(id)a4 largeWidgets:(id)a5 extraLargeWidgets:(id)a6 shouldSuggestStackInGallery:(BOOL)a7;
- (BOOL)isEqual:(id)a0;

@end
