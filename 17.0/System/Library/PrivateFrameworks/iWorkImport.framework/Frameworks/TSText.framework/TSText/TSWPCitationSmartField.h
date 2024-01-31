@class NSArray, NSString;
@protocol TSWPCitationSmartFieldEditing;

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray *_citationRecords;
    BOOL _isLocalizable;
}

@property (copy, nonatomic) NSArray *citationRecords;
@property (nonatomic) BOOL isLocalizable;
@property (nonatomic) id<TSWPCitationSmartFieldEditing> editingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidCitationField:(id)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (BOOL)supportsDeepCopyForUndo;

@end
