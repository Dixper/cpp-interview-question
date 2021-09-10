#include <vector>

namespace QuestionA
{
  /**
   * Given a sequence of positions of a car that is accelerating at first and then starts decelerating and keeps
   * decelerating to the end, finds the position at which the car started decelerating.
   *
   * \param car_position_data Contains a sequence of numbers (at least two) that represents position of the car sampled
   * at consequitive equal time intervals. The car is accelerating at the first position and decelerating at the last
   * position. (Speed of the car is positive at the start)
   *
   * \return The first position in the input at which the car starts decelerating.
   */
  __declspec(dllexport) double FindTheCarDeceleratingPosition(const std::vector<double>& carPositionData)
  {
    return carPositionData.back();
  }
}
