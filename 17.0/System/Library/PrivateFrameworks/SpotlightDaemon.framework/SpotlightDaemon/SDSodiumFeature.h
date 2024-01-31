@interface SDSodiumFeature : NSObject

+ (BOOL)isCalendarBundle:(id)a0;
+ (BOOL)isMessagesBundle:(id)a0;
+ (BOOL)isPhotosBundle:(id)a0;
+ (id)allBundleIDsUsingSodiumRanking;
+ (BOOL)isMailBundle:(id)a0;
+ (BOOL)pureSodiumL2RankingAllowedWithSectionBundle:(id)a0 clientBundle:(id)a1;
+ (BOOL)usingSodiumRankingForClientBundle:(id)a0;

@end
