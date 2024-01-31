@interface SALoggingUtilities : NSObject

+ (id)extractUniqueIdentifierFromMessage:(id)a0;
+ (id)computeMessagesForEvent:(id)a0;
+ (id)extractEventFromMessages:(id)a0;
+ (void)logTAEvent:(id)a0;
+ (id)stringToSplit:(id)a0 maxSplitSize:(unsigned long long)a1;

@end
