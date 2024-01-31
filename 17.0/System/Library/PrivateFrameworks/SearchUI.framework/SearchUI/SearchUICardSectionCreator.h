@interface SearchUICardSectionCreator : NSObject

+ (id)cardSectionViewForModel:(id)a0 feedbackDelegate:(id)a1;
+ (Class)viewClassForCardSection:(id)a0 horizontal:(BOOL)a1;
+ (id)viewsForCardSections:(id)a0 isInline:(BOOL)a1 feedbackDelegate:(id)a2;

@end
