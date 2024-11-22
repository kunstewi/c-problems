// interest.h

// Macro to calculate simple interest (SI = P * R * T / 100)
#define SIMPLE_INTEREST(P, R, T) (((P) * (R) * (T)) / 100.0)

// Macro to calculate amount (Amount = Principal + Simple Interest)
#define AMOUNT(P, SI) ((P) + (SI))