@class NSSet;

@interface ATXAppDisplayIdentifiers : NSObject

@property (class, readonly, nonatomic) NSSet *allIdentifiers;
@property (class, readonly, nonatomic) NSSet *appIdentifiers;

+ (BOOL)isWidgetOrWebClipIdentifier:(id)a0;

@end
