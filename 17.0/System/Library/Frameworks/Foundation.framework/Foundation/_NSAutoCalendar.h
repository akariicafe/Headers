@interface _NSAutoCalendar : NSCalendar

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCalendarIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;

@end
