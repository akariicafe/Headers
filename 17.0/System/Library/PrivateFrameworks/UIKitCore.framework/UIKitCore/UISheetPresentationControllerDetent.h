@class NSString;

@interface UISheetPresentationControllerDetent : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _type;
@property (readonly, nonatomic) id /* block */ _internalBlock;
@property (readonly, nonatomic) double _constant;
@property (readonly, nonatomic) BOOL _createdWithDeprecatedInitializer;
@property (readonly, nonatomic) NSString *_identifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_detentWithContainerViewBlock:(id /* block */)a0;
+ (id)_detentWithIdentifier:(id)a0 constant:(double)a1;
+ (id)mediumDetent;
+ (id)_detentWithIdentifier:(id)a0 resolutionContextBlock:(id /* block */)a1;
+ (id)customDetentWithIdentifier:(id)a0 resolver:(id /* block */)a1;
+ (id)largeDetent;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_detentWithIdentifier:(id)a0 containerViewBlock:(id /* block */)a1;
+ (id)_detentWithResolutionContextBlock:(id /* block */)a0;

- (void)_setIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (double)resolvedValueInContext:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 internalBlock:(id /* block */)a2 constant:(double)a3;
- (void).cxx_destruct;
- (double)_valueInResolutionContext:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
