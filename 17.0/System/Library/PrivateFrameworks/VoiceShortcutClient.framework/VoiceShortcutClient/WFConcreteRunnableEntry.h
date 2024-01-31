@class NSString, WFIcon;
@protocol WFPropertyListObject;

@interface WFConcreteRunnableEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WFIcon *entryIcon;
@property (readonly, nonatomic) WFIcon *accessoryIcon;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedParameterState;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 entryIcon:(id)a2 accessoryIcon:(id)a3 serializedParameterState:(id)a4;

@end
