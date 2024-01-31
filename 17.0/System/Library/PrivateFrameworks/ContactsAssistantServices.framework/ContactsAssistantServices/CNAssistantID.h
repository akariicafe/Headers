@interface CNAssistantID : NSObject

+ (id)databaseID;
+ (id)assistantIDFromContact:(id)a0;
+ (id)assistantIDFromContactID:(id)a0;
+ (id)assistantIDFromContainer:(id)a0;
+ (id)assistantIDFromExternalIdentifier:(id)a0;
+ (id)assistantIDFromGroup:(id)a0;
+ (id)assistantIDOfType:(id)a0 recordID:(int)a1 databaseID:(id)a2 identifier:(id)a3;
+ (id)contactIDFromAssistantID:(id)a0;
+ (id)containerIDFromAssistantID:(id)a0;
+ (id)externalIdentifierFromAssistantID:(id)a0;
+ (id)groupIDFromAssistantID:(id)a0;

@end
