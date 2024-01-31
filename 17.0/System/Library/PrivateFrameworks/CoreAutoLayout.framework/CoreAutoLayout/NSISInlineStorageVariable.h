@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate>

@property (copy) NSString *name;
@property int valueRestriction;
@property BOOL shouldBeMinimized;
@property BOOL valueIsUserObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)dealloc;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (int)nsis_orientationHintForVariable:(id)a0;
- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (id)markedConstraint;
- (id)initWithCoder:(id)a0;
- (id)nsis_descriptionOfVariable:(id)a0;

@end
