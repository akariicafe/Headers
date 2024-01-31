@class NSString, NSSet;

@interface ATXWidgetStackSuggestion : NSObject {
    void /* unknown type, empty encoding */ stackIdentifier;
    void /* unknown type, empty encoding */ suggestedWidgets;
}

@property (nonatomic, readonly) NSString *stackIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ topWidget;
@property (nonatomic, readonly) NSSet *suggestedWidgets;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *topWidgetIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStackIdentifier:(id)a0 topWidget:(id)a1 suggestedWidgets:(id)a2;

@end
