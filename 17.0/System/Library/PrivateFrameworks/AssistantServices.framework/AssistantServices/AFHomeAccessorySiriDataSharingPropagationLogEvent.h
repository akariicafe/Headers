@class NSString, NSDate;

@interface AFHomeAccessorySiriDataSharingPropagationLogEvent : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) long long propagationEvent;
@property (readonly, copy, nonatomic) NSString *propagationEventReason;
@property (readonly, copy, nonatomic) NSString *associatedChangeLogEventIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 accessoryIdentifier:(id)a1 propagationEvent:(long long)a2 propagationEventReason:(id)a3 associatedChangeLogEventIdentifier:(id)a4;

@end
