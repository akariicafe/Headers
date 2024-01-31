@interface PBUndoInteractionHUDIconPasteButtonTag : PBPasteButtonTag

@property (readonly) double minWidth;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)a0 systemInputAssistantPasteButtonTagVisit:(id /* block */)a1 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)a2 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)a3 contextMenuPasteButtonTagVisit:(id /* block */)a4 editMenuPasteButtonTagVisit:(id /* block */)a5;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (float)backgroundStatisticsForegroundForStyle:(id)a0;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })backgroundStatisticsRegionForStyle:(id)a0;
- (id)initWithMinWidth:(double)a0;
- (unsigned int)secureNameForStyle:(id)a0;

@end
