@class rowVariant;

@interface searchColumn : NSObject

@property int propNumber;
@property (retain) rowVariant *propValue;

- (void).cxx_destruct;
- (id)initWithPropertyNumber:(int)a0 RVariant:(id)a1;

@end
