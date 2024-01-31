@class NSString, WFConcreteRunnableEntry;

@interface WFEntityPickerDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFConcreteRunnableEntry *selectedEntry;
@property (readonly, nonatomic) BOOL userRequestedAllOptions;
@property (readonly, nonatomic) BOOL userRequestedOpenApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSelectedEntry:(id)a0;

@end
