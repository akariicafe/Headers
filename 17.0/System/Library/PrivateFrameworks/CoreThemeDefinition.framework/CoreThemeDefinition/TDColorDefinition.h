@class NSManagedObject, NSDate, NSNumber, TDColorName;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *physicalColor;
@property (retain, nonatomic) NSManagedObject *colorStatus;
@property (retain, nonatomic) TDColorName *name;

- (id)colorAsString;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (id)dataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setAttributesFromData:(id)a0;

@end
