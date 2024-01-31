@interface PBPasteButtonTag : UISSlotTag <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)calloutBarPasteButtonTagWithSecureName:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2 titleWidth:(double)a3 contentScaleLevel:(unsigned long long)a4;
+ (id)contextMenuPasteButtonTagWithSecureName:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2 layoutSize:(long long)a3 hasTrailingGutter:(BOOL)a4;
+ (id)editMenuPasteButtonTagWithSecureName:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1 contentOrigin:(struct CGPoint { double x0; double x1; })a2 displayMode:(unsigned long long)a3;
+ (id)systemInputAssistantPasteButtonTagWithSite:(long long)a0;
+ (id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(double)a0;
+ (id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0;
- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)a0 systemInputAssistantPasteButtonTagVisit:(id /* block */)a1 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)a2 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)a3 contextMenuPasteButtonTagVisit:(id /* block */)a4 editMenuPasteButtonTagVisit:(id /* block */)a5;
- (float)backgroundStatisticsFailingContrastForStyle:(id)a0;
- (float)backgroundStatisticsPassingContrastForStyle:(id)a0;
- (struct CGColor { } *)baseForegroundColorForStyle:(id)a0;
- (unsigned long long)failGradeForStyle:(id)a0;

@end
